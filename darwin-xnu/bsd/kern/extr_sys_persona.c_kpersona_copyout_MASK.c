
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef scalar_t__ uint32_t ;
struct kpersona_info {int dummy; } ;
typedef int info_v ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,int) ;
 int FUNC_1 (struct kpersona_info*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct kpersona_info *VAR_2, user_addr_t VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, &VAR_4, sizeof(VAR_4));
 if (VAR_5)
  return VAR_5;



 if (VAR_4 != VAR_1)
  return VAR_0;

 VAR_5 = FUNC_1(VAR_2, VAR_3, sizeof(*VAR_2));
 return VAR_5;
}
