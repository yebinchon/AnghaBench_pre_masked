
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_entry {scalar_t__ generation; int host; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct node_entry *VAR_0)
{
 return VAR_0->generation == FUNC_0(VAR_0->host);
}
