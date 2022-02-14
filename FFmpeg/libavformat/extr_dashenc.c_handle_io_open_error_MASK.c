
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int errbuf ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {scalar_t__ ignore_io_errors; } ;
typedef TYPE_1__ DASHContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*,char*,char*) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_3, int VAR_4, char *VAR_5) {
    DASHContext *VAR_6 = VAR_3->priv_data;
    char VAR_7[VAR_0];
    FUNC_1(VAR_4, VAR_7, sizeof(VAR_7));
    FUNC_0(VAR_3, VAR_6->ignore_io_errors ? VAR_2 : VAR_1,
           "Unable to open %s for writing: %s\n", VAR_5, VAR_7);
    return VAR_6->ignore_io_errors ? 0 : VAR_4;
}
