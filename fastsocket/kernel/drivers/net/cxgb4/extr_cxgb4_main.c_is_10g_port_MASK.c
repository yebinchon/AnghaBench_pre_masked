
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_config {int supported; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct link_config *VAR_1)
{
 return (VAR_1->supported & VAR_0) != 0;
}
