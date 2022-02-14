
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int id; int cssid; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct chp_id VAR_1)
{
 return VAR_1.id + VAR_1.cssid * (VAR_0 + 1);
}
