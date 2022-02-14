
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {scalar_t__ last_commit_jiffies; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pool *VAR_2)
{
 return VAR_1 < VAR_2->last_commit_jiffies ||
        VAR_1 > VAR_2->last_commit_jiffies + VAR_0;
}
