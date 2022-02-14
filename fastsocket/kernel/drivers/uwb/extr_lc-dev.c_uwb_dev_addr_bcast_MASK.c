
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_dev_addr {int data; } ;


 int FUNC_0 (struct uwb_dev_addr const*,struct uwb_dev_addr const*) ;

__attribute__((used)) static inline int FUNC_1(const struct uwb_dev_addr *VAR_0)
{
 static const struct uwb_dev_addr VAR_1 = { .data = { 0xff, 0xff } };
 return !FUNC_0(VAR_0, &VAR_1);
}
