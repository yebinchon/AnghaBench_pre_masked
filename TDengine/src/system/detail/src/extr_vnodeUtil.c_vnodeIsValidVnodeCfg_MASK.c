
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ maxSessions; scalar_t__ cacheBlockSize; int replications; scalar_t__ daysPerFile; scalar_t__ daysToKeep; } ;
typedef TYPE_1__ SVnodeCfg ;



bool FUNC_0(SVnodeCfg* VAR_0) {
  if (VAR_0 == ((void*)0)) return 0;

  if (VAR_0->maxSessions <= 0 || VAR_0->cacheBlockSize <= 0 || VAR_0->replications <= 0 || VAR_0->replications > 20 ||
      VAR_0->daysPerFile <= 0 || VAR_0->daysToKeep <= 0) {
    return 0;
  }

  return 1;
}
