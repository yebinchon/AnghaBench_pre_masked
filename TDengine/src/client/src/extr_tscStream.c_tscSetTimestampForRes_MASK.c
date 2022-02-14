
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_10__ {TYPE_2__ res; } ;
struct TYPE_8__ {scalar_t__ stime; scalar_t__ interval; } ;
typedef TYPE_1__ SSqlStream ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;


 int FUNC_0 (char*,TYPE_3__*,TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(SSqlStream *VAR_0, SSqlObj *VAR_1) {
  SSqlRes *VAR_2 = &VAR_1->res;

  int64_t VAR_3 = *(int64_t *)VAR_2->data;
  int64_t VAR_4 = VAR_0->stime - VAR_0->interval;

  if (VAR_3 != VAR_4) {

    *((int64_t *)VAR_2->data) = VAR_4;
    FUNC_0("%p stream:%p, timestamp of points is:%lld, reset to %lld", VAR_1, VAR_0, VAR_3, VAR_4);
  }
}
