
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int seekable; } ;
typedef TYPE_1__ AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_4, AVIOContext *VAR_5, int64_t VAR_6) {




    if (FUNC_1(VAR_5, VAR_6, VAR_3) < 0)
        FUNC_0(VAR_4, (VAR_5->seekable & VAR_0) ? VAR_1 : VAR_2, "Unable to seek back to the start\n");
}
