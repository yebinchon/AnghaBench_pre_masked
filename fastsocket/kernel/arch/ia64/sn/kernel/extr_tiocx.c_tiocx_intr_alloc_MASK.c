
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ia64_sal_retval {scalar_t__ status; scalar_t__ v0; } ;
typedef int nasid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ia64_sal_retval*,int ,int ,int ,int,scalar_t__,int,int ,int) ;

__attribute__((used)) static inline u64 FUNC_1(nasid_t VAR_2, int VAR_3,
     u64 VAR_4,
     int VAR_5, nasid_t VAR_6,
     int VAR_7)
{
 struct ia64_sal_retval VAR_8;
 VAR_8.status = 0;
 VAR_8.v0 = 0;

 FUNC_0(&VAR_8, VAR_1,
    VAR_0, VAR_2,
    VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7);
 return VAR_8.status;
}
