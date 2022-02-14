
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uLong ;
typedef int uInt ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,int ,int,int *) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;

extern uLong FUNC_5(FILE *VAR_3)
{
 unsigned char* VAR_4;
 uLong VAR_5;
 uLong VAR_6;
 uLong VAR_7=0xffff;
 uLong VAR_8=0;

 if (FUNC_3(VAR_3,0,VAR_1) != 0)
  return 0;


 VAR_5 = FUNC_4( VAR_3 );

 if (VAR_7>VAR_5)
  VAR_7 = VAR_5;

 VAR_4 = (unsigned char*)FUNC_0(VAR_0+4);
 if (VAR_4==((void*)0))
  return 0;

 VAR_6 = 4;
 while (VAR_6<VAR_7)
 {
  uLong VAR_9,VAR_10 ;
  int VAR_11;
  if (VAR_6+VAR_0>VAR_7)
   VAR_6 = VAR_7;
  else
   VAR_6+=VAR_0;
  VAR_10 = VAR_5-VAR_6 ;

  VAR_9 = ((VAR_0+4) < (VAR_5-VAR_10)) ?
                     (VAR_0+4) : (VAR_5-VAR_10);
  if (FUNC_3(VAR_3,VAR_10,VAR_2)!=0)
   break;

  if (FUNC_2(VAR_4,(uInt)VAR_9,1,VAR_3)!=1)
   break;

                for (VAR_11=(int)VAR_9-3; (VAR_11--)>0;)
   if (((*(VAR_4+VAR_11))==0x50) && ((*(VAR_4+VAR_11+1))==0x4b) &&
    ((*(VAR_4+VAR_11+2))==0x05) && ((*(VAR_4+VAR_11+3))==0x06))
   {
    VAR_8 = VAR_10+VAR_11;
    break;
   }

  if (VAR_8!=0)
   break;
 }
 FUNC_1(VAR_4);
 return VAR_8;
}
