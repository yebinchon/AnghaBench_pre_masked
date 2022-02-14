
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int mach_port_name_t ;
typedef int kqueue_id_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int *) ;
 int FUNC_1 (int,int,scalar_t__,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int,int,int ,int ,int *) ;
 int FUNC_4 (int,int,int ,int ,int *) ;
 int FUNC_5 (int,int,int ,int *) ;
 int FUNC_6 (int,int,int ,int ,int ,int *) ;
 int FUNC_7 (int,int,int,int ,int ,int *) ;
 int FUNC_8 (int,int,int ,int ,int ,int *) ;
 int FUNC_9 (int,int,scalar_t__,int ,int ,int *) ;
 int FUNC_10 (int,int,int ,int ,int *) ;
 int FUNC_11 (int,int,scalar_t__,int ,int ,int *) ;
 int FUNC_12 (int,int *) ;
 int FUNC_13 (int,int,int ,int ,int *) ;

int
FUNC_14(int VAR_1, int VAR_2, int VAR_3, uint64_t VAR_4, user_addr_t VAR_5, uint32_t VAR_6, int32_t * VAR_7)
{

 switch(VAR_1) {
  case 137:

   return(FUNC_4(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7));
  case 133:
   return(FUNC_9(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
  case 135:
   return(FUNC_7(VAR_2, VAR_3, (int)VAR_4, VAR_5, VAR_6, VAR_7));
  case 139:
   return(FUNC_2(VAR_5, VAR_6, VAR_7));
  case 130:
   return(FUNC_11(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
  case 134:
   return(FUNC_8(VAR_2, VAR_3, (mach_port_name_t)VAR_4, VAR_5, VAR_6, VAR_7));
  case 129:
   return(FUNC_12(VAR_2, VAR_7));
  case 140:
   return(FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7));
  case 131:
   return (FUNC_5(VAR_2, VAR_3, VAR_5, VAR_7));
  case 132:
   return (FUNC_10(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7));
  case 138:
   return FUNC_3(VAR_2 , VAR_3 , VAR_5,
         VAR_6, VAR_7);
  case 141:
   return FUNC_0(VAR_2, VAR_5, VAR_6, VAR_7);
  case 136:
   return FUNC_6(VAR_2, VAR_3, (kqueue_id_t)VAR_4, VAR_5, VAR_6, VAR_7);

  case 128:
   return FUNC_13(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7);

  default:
   return VAR_0;
 }

 return(VAR_0);
}
