
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_4__ {scalar_t__ atime; int flags; int name; int sl; scalar_t__ clients; } ;
typedef TYPE_1__ queue ;
struct TYPE_5__ {scalar_t__ unixtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(queue *VAR_4, time_t VAR_5) {
    time_t VAR_6 = VAR_3.unixtime - VAR_4->atime;
    if (VAR_6 < VAR_5) return VAR_0;
    if (VAR_4->clients && FUNC_1(VAR_4->clients) != 0) return VAR_0;
    if (FUNC_2(VAR_4->sl)) return VAR_0;
    if (VAR_4->flags & VAR_2) return VAR_0;
    FUNC_0(VAR_4->name);
    return VAR_1;
}
