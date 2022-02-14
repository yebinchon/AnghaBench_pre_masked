
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mpc_status ;
struct TYPE_7__ {int file_size; int * p_file; int tell; int seek; int read; int get_size; int canseek; struct TYPE_7__* data; int is_seekable; int magic; } ;
typedef TYPE_1__ mpc_reader_stdio ;
typedef TYPE_1__ mpc_reader ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

mpc_status
FUNC_6(mpc_reader * VAR_11, FILE * VAR_12)
{
    mpc_reader VAR_13; mpc_reader_stdio *VAR_14; int VAR_15;

    VAR_14 = ((void*)0);
    FUNC_5(&VAR_13, 0, sizeof VAR_13);
    VAR_14 = FUNC_4(sizeof *VAR_14);
    if(!VAR_14) return VAR_0;
    FUNC_5(VAR_14, 0, sizeof *VAR_14);

    VAR_14->magic = VAR_5;
    VAR_14->p_file = VAR_12;
    VAR_14->is_seekable = VAR_2;
    VAR_15 = FUNC_2(VAR_14->p_file, 0, VAR_3);
    if(VAR_15 < 0) goto clean;
    VAR_15 = FUNC_3(VAR_14->p_file);
    if(VAR_15 < 0) goto clean;
    VAR_14->file_size = VAR_15;
    VAR_15 = FUNC_2(VAR_14->p_file, 0, VAR_4);
    if(VAR_15 < 0) goto clean;

    VAR_13.data = VAR_14;
    VAR_13.canseek = VAR_6;
    VAR_13.get_size = VAR_7;
    VAR_13.read = VAR_8;
    VAR_13.seek = VAR_9;
    VAR_13.tell = VAR_10;

    *VAR_11 = VAR_13;
    return VAR_1;
clean:
    if(VAR_14 && VAR_14->p_file)
        FUNC_0(VAR_14->p_file);
    FUNC_1(VAR_14);
    return VAR_0;
}
