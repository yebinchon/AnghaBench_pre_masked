
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2561_command {int cmd; scalar_t__ clear; scalar_t__ word; scalar_t__ block; scalar_t__ address; } ;



__attribute__((used)) static inline void FUNC_0(struct tsl2561_command *VAR_0)
{
 VAR_0->address = 0;
 VAR_0->block = 0;
 VAR_0->word = 0;
 VAR_0->clear = 0;
 VAR_0->cmd = 1;
}
