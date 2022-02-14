
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it87_data {scalar_t__ type; int revision; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static inline int FUNC_0(const struct it87_data *VAR_5)
{



 return (VAR_5->type == VAR_0 && VAR_5->revision >= 0x03)
     || (VAR_5->type == VAR_1 && VAR_5->revision >= 0x08)
     || VAR_5->type == VAR_2
     || VAR_5->type == VAR_3
     || VAR_5->type == VAR_4;
}
