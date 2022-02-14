
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ VGPaintMode ;
struct TYPE_5__ {int m_numPaths; TYPE_1__* m_paths; } ;
struct TYPE_4__ {float m_miterLimit; float m_strokeWidth; int m_path; void* m_fillPaint; void* m_strokePaint; int m_joinStyle; int m_capStyle; scalar_t__ m_paintMode; void* m_fillRule; } ;
typedef TYPE_1__ PathData ;
typedef TYPE_2__ PS ;


 int FUNC_0 (int) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int,unsigned char*,float const*) ;
 void* FUNC_5 () ;
 int FUNC_6 (int ,int ,float,float,int ,int ,unsigned int) ;
 int FUNC_7 (void*,int ,int,float*) ;
 int FUNC_8 (void*,int ,int ) ;

PS* FUNC_9(const char* VAR_21, int VAR_22, const float* VAR_23, int VAR_24)
{
 PS* VAR_25 = (PS*)FUNC_3(sizeof(PS));
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29 = 0;
 int VAR_30 = 0;
 unsigned char* VAR_31;
 FUNC_0(VAR_24);

 while(VAR_27 < VAR_22)
 {
  int VAR_32, VAR_33;
  VAR_27 += 4;
  VAR_26 += 8;
  VAR_32 = (int)VAR_23[VAR_26++];
  FUNC_1(VAR_32 > 0);
  if(VAR_32 > VAR_30)
   VAR_30 = VAR_32;
  for(VAR_33=0;VAR_33<VAR_32;VAR_33++)
  {
   switch(VAR_21[VAR_27])
   {
   case 'M': VAR_26 += 2; break;
   case 'L': VAR_26 += 2; break;
   case 'C': VAR_26 += 6; break;
   case 'E': break;
   default:
    FUNC_1(0);
   }
   VAR_27++;
  }
  VAR_29++;
 }

 VAR_25->m_numPaths = VAR_29;
 VAR_25->m_paths = (PathData*)FUNC_3(VAR_29 * sizeof(PathData));
 VAR_31 = (unsigned char*)FUNC_3(VAR_30);

 VAR_28 = 0;
 VAR_26 = 0;
 VAR_27 = 0;
 while(VAR_27 < VAR_22)
 {
  int VAR_34, VAR_35, VAR_36;
  float VAR_37[4];


  int VAR_38 = 0;
  VAR_25->m_paths[VAR_28].m_fillRule = VAR_13;
  switch( VAR_21[VAR_27] )
  {
  case 'N':
   break;
  case 'F':
   VAR_25->m_paths[VAR_28].m_fillRule = VAR_13;
   VAR_38 |= VAR_7;
   break;
  case 'E':
   VAR_25->m_paths[VAR_28].m_fillRule = VAR_6;
   VAR_38 |= VAR_7;
   break;
  default:
   FUNC_1(0);
  }
  VAR_27++;


  switch( VAR_21[VAR_27] )
  {
  case 'N':
   break;
  case 'S':
   VAR_38 |= VAR_20;
   break;
  default:
   FUNC_1(0);
  }
  VAR_25->m_paths[VAR_28].m_paintMode = (VGPaintMode)VAR_38;
  VAR_27++;


  switch( VAR_21[VAR_27] )
  {
  case 'B':
   VAR_25->m_paths[VAR_28].m_capStyle = VAR_1;
   break;
  case 'R':
   VAR_25->m_paths[VAR_28].m_capStyle = VAR_2;
   break;
  case 'S':
   VAR_25->m_paths[VAR_28].m_capStyle = VAR_3;
   break;
  default:
   FUNC_1(0);
  }
  VAR_27++;


  switch( VAR_21[VAR_27] )
  {
  case 'M':
   VAR_25->m_paths[VAR_28].m_joinStyle = VAR_9;
   break;
  case 'R':
   VAR_25->m_paths[VAR_28].m_joinStyle = VAR_10;
   break;
  case 'B':
   VAR_25->m_paths[VAR_28].m_joinStyle = VAR_8;
   break;
  default:
   FUNC_1(0);
  }
  VAR_27++;


  VAR_25->m_paths[VAR_28].m_miterLimit = VAR_23[VAR_26++];
  VAR_25->m_paths[VAR_28].m_strokeWidth = VAR_23[VAR_26++];


  VAR_37[0] = VAR_23[VAR_26++];
  VAR_37[1] = VAR_23[VAR_26++];
  VAR_37[2] = VAR_23[VAR_26++];
  VAR_37[3] = 1.0f;
  VAR_25->m_paths[VAR_28].m_strokePaint = FUNC_5();
  FUNC_8(VAR_25->m_paths[VAR_28].m_strokePaint, VAR_15, VAR_16);
  FUNC_7(VAR_25->m_paths[VAR_28].m_strokePaint, VAR_14, 4, VAR_37);

  VAR_37[0] = VAR_23[VAR_26++];
  VAR_37[1] = VAR_23[VAR_26++];
  VAR_37[2] = VAR_23[VAR_26++];
  VAR_37[3] = 1.0f;
  VAR_25->m_paths[VAR_28].m_fillPaint = FUNC_5();
  FUNC_8(VAR_25->m_paths[VAR_28].m_fillPaint, VAR_15, VAR_16);
  FUNC_7(VAR_25->m_paths[VAR_28].m_fillPaint, VAR_14, 4, VAR_37);



  VAR_34 = (int)VAR_23[VAR_26++];
  FUNC_1(VAR_34 > 0);
  VAR_35 = VAR_26;
  for(VAR_36=0;VAR_36<VAR_34;VAR_36++)
  {
   switch( VAR_21[VAR_27] )
   {
   case 'M':
    VAR_31[VAR_36] = VAR_12 | VAR_0;
    VAR_26 += 2;
    break;
   case 'L':
    VAR_31[VAR_36] = VAR_11 | VAR_0;
    VAR_26 += 2;
    break;
   case 'C':
    VAR_31[VAR_36] = VAR_5 | VAR_0;
    VAR_26 += 6;
    break;
   case 'E':
    VAR_31[VAR_36] = VAR_4;
    break;
   default:
    FUNC_1(0);
   }
   VAR_27++;
  }

  VAR_25->m_paths[VAR_28].m_path = FUNC_6(VAR_19, VAR_18, 1.0f, 0.0f, 0, 0, (unsigned int)VAR_17);
  FUNC_4(VAR_25->m_paths[VAR_28].m_path, VAR_34, VAR_31, VAR_23 + VAR_35);
  VAR_28++;
 }
 FUNC_2(VAR_31);
 return VAR_25;
}
