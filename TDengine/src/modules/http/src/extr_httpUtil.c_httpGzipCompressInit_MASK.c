
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ voidpf ;
typedef scalar_t__ free_func ;
typedef scalar_t__ alloc_func ;
struct TYPE_5__ {scalar_t__ opaque; scalar_t__ zfree; scalar_t__ zalloc; } ;
struct TYPE_4__ {TYPE_3__ gzipStream; } ;
typedef TYPE_1__ HttpContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,int ,scalar_t__,int,int ) ;

int FUNC_1(HttpContext *VAR_5) {
  VAR_5->gzipStream.zalloc = (alloc_func) 0;
  VAR_5->gzipStream.zfree = (free_func) 0;
  VAR_5->gzipStream.opaque = (voidpf) 0;
  if (FUNC_0(&VAR_5->gzipStream, VAR_1, VAR_3, VAR_0 + 16, 8, VAR_2) != VAR_4) {
    return -1;
  }

  return 0;
}
