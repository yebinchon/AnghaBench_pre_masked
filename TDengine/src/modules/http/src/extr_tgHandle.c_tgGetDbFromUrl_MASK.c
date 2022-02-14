
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* path; } ;
struct TYPE_8__ {TYPE_2__ parser; } ;
struct TYPE_6__ {scalar_t__ len; char* pos; } ;
typedef TYPE_2__ HttpParser ;
typedef TYPE_3__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;

char *FUNC_1(HttpContext *VAR_4) {
  HttpParser *VAR_5 = &VAR_4->parser;
  if (VAR_5->path[VAR_2].len <= 0) {
    FUNC_0(VAR_4, VAR_0);
    return ((void*)0);
  }

  if (VAR_5->path[VAR_2].len >= VAR_3) {
    FUNC_0(VAR_4, VAR_1);
    return ((void*)0);
  }

  return VAR_5->path[VAR_2].pos;
}
