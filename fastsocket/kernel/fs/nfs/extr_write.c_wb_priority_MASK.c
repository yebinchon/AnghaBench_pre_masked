
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ for_background; scalar_t__ for_kupdate; scalar_t__ for_reclaim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct writeback_control *VAR_4)
{
 if (VAR_4->for_reclaim)
  return VAR_1 | VAR_3;
 if (VAR_4->for_kupdate || VAR_4->for_background)
  return VAR_2 | VAR_0;
 return VAR_0;
}
