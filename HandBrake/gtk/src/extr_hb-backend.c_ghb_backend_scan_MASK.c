
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int gint ;
typedef int gchar ;
struct TYPE_3__ {int title_count; int preview_count; scalar_t__ progress; scalar_t__ preview_cur; scalar_t__ title_cur; int state; } ;
struct TYPE_4__ {TYPE_1__ scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ,int ,int,int ) ;
 TYPE_2__ VAR_2 ;

void
FUNC_1(const gchar *VAR_3, gint VAR_4, gint VAR_5, uint64_t VAR_6)
{
    FUNC_0( VAR_1, VAR_3, VAR_4, VAR_5, 1, VAR_6 );
    VAR_2.scan.state |= VAR_0;


    VAR_2.scan.title_count = 1;
    VAR_2.scan.title_cur = 0;
    VAR_2.scan.preview_count = 1;
    VAR_2.scan.preview_cur = 0;
    VAR_2.scan.progress = 0;
}
