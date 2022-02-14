
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_hw {int vid_mode; scalar_t__ ste_mode; } ;


 size_t VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct falcon_hw *VAR_2)
{
 return VAR_2->ste_mode ? 16
       : VAR_1[VAR_0][VAR_2->vid_mode >> 2 & 0x3];
}
