
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ kern_return_t ;
typedef int coalition_t ;
typedef int cid ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,int,int ) ;
 scalar_t__ FUNC_3 (int,int,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static
int
FUNC_6(user_addr_t VAR_6, uint32_t VAR_7)
{
 int VAR_8 = 0;
 kern_return_t VAR_9;
 uint64_t VAR_10;
 coalition_t VAR_11;
 int VAR_12 = FUNC_1(VAR_7);
 int VAR_13 = FUNC_0(VAR_7);
 boolean_t VAR_14 = !!(VAR_7 & VAR_1);

 if ((VAR_7 & (~VAR_0)) != 0)
  return VAR_3;
 if (VAR_12 < 0 || VAR_12 > VAR_2)
  return VAR_3;

 VAR_9 = FUNC_3(VAR_12, VAR_13, VAR_14, &VAR_11);
 if (VAR_9 != VAR_5) {

  VAR_8 = VAR_4;
  goto out;
 }

 VAR_10 = FUNC_4(VAR_11);

 FUNC_2("(addr, %u) -> %llu", VAR_7, VAR_10);
 VAR_8 = FUNC_5(&VAR_10, VAR_6, sizeof(VAR_10));
out:
 return VAR_8;
}
