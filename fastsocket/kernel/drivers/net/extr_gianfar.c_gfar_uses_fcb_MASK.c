
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfar_private {scalar_t__ rx_csum_enable; scalar_t__ vlgrp; } ;



__attribute__((used)) static inline int FUNC_0(struct gfar_private *VAR_0)
{
 return VAR_0->vlgrp || VAR_0->rx_csum_enable;
}
