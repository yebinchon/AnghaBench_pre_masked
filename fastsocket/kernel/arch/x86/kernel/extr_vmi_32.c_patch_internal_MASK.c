
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vmi_relocation_info {int type; scalar_t__ eip; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char VAR_0 ;
 char VAR_1 ;




 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (void*,unsigned long,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static unsigned FUNC_4(int VAR_4, unsigned VAR_5, void *VAR_6,
          unsigned long VAR_7)
{
 u64 VAR_8;
 struct vmi_relocation_info *const VAR_9 = (struct vmi_relocation_info *)&VAR_8;
 VAR_8 = FUNC_2(VAR_3, VAR_2, VAR_4);
 switch(VAR_9->type) {
  case 131:
   FUNC_1(VAR_5 < 5);
   *(char *)VAR_6 = VAR_0;
   FUNC_3(VAR_6, VAR_7, (unsigned long)VAR_9->eip);
   return 5;

  case 130:
   FUNC_1(VAR_5 < 5);
   *(char *)VAR_6 = VAR_1;
   FUNC_3(VAR_6, VAR_7, (unsigned long)VAR_9->eip);
   return 5;

  case 128:

   return 0;

  case 129:

   break;

  default:
   FUNC_0();
 }
 return VAR_5;
}
