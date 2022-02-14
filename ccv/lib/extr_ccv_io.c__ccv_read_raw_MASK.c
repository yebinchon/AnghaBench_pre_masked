
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int step; } ;
typedef TYPE_1__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;

 int VAR_5 ;


 int VAR_6 ;
 int FUNC_0 (TYPE_1__**,void*,int,int,int,int) ;
 int FUNC_1 (TYPE_1__**,void*,int,int,int,int) ;
 int FUNC_2 (TYPE_1__**,void*,int,int,int,int) ;
 int FUNC_3 (TYPE_1__**,void*,int,int,int,int) ;
 int FUNC_4 (TYPE_1__**,void*,int,int,int,int) ;
 int FUNC_5 (TYPE_1__**,void*,int,int,int,int) ;
 int FUNC_6 (TYPE_1__**,void*,int,int,int,int) ;
 int FUNC_7 (int) ;
 TYPE_1__* FUNC_8 (int,int,int,void*,int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(ccv_dense_matrix_t** VAR_7, void* VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 FUNC_7(VAR_10 > 0 && VAR_11 > 0 && VAR_12 > 0);
 if (VAR_9 & VAR_5)
 {




  int VAR_13 = VAR_0 | VAR_1;
  switch (VAR_9 & 0xFF)
  {
   case 128:
   case 131:
    VAR_13 = VAR_0 | VAR_2;
    break;
   case 129:
   case 133:
   case 132:
   case 134:
    VAR_13 = VAR_0 | VAR_3;
    break;
   case 130:
   default:

    break;
  }
  *VAR_7 = FUNC_8(VAR_10, VAR_11, VAR_13 | VAR_6, VAR_8, 0);
  (*VAR_7)->step = VAR_12;
 } else {
  switch (VAR_9 & 0xFF)
  {
   case 128:
    FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    break;
   case 129:
    FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    break;
   case 133:
    FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    break;
   case 131:
    FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    break;
   case 132:
    FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    break;
   case 134:
    FUNC_0(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    break;
   case 130:
    FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    break;
  }
 }
 if (*VAR_7 != 0)
  FUNC_9(*VAR_7);
 return VAR_4;
}
