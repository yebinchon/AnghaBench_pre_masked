
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* path; } ;
struct TYPE_7__ {int user; TYPE_2__ parser; } ;
struct TYPE_5__ {int len; int pos; } ;
typedef TYPE_2__ HttpParser ;
typedef TYPE_3__ HttpContext ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

bool FUNC_1(HttpContext *VAR_2) {
  HttpParser *VAR_3 = &VAR_2->parser;
  if (VAR_3->path[VAR_0].len > VAR_1 - 1 || VAR_3->path[VAR_0].len <= 0) {
    return 0;
  }

  FUNC_0(VAR_2->user, VAR_3->path[VAR_0].pos);
  return 1;
}
