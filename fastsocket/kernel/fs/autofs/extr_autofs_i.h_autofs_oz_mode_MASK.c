
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_sb_info {scalar_t__ oz_pgrp; scalar_t__ catatonic; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct autofs_sb_info *VAR_1) {
 return VAR_1->catatonic || FUNC_0(VAR_0) == VAR_1->oz_pgrp;
}
