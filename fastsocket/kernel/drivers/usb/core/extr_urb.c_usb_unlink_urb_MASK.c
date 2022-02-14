
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int ep; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct urb*,int ) ;

int FUNC_1(struct urb *VAR_4)
{
 if (!VAR_4)
  return -VAR_2;
 if (!VAR_4->dev)
  return -VAR_3;
 if (!VAR_4->ep)
  return -VAR_1;
 return FUNC_0(VAR_4, -VAR_0);
}
