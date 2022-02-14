
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wkr ;
typedef scalar_t__ u16 ;
struct airo_info {char defindex; } ;
struct TYPE_4__ {char* mac; void* kindex; void* len; } ;
typedef TYPE_1__ WepKeyRid ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct airo_info*,int) ;
 int FUNC_2 (struct airo_info*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct airo_info*,TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_5(struct airo_info *VAR_0, u16 VAR_1, int VAR_2, int VAR_3)
{
 WepKeyRid VAR_4;
 int VAR_5;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.len = FUNC_0(sizeof(VAR_4));
 VAR_4.kindex = FUNC_0(0xffff);
 VAR_4.mac[0] = (char)VAR_1;

 if (VAR_2) {
  VAR_0->defindex = (char)VAR_1;
  FUNC_1(VAR_0, VAR_3);
 }

 VAR_5 = FUNC_4(VAR_0, &VAR_4, VAR_2, VAR_3);

 if (VAR_2)
  FUNC_2(VAR_0, VAR_3);
 return VAR_5;
}
