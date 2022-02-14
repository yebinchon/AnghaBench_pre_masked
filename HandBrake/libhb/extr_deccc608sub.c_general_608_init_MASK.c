
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_write {unsigned char* enc_buffer; int enc_buffer_capacity; int new_sentence; int new_channel; scalar_t__ last_scr_sequence; scalar_t__ last_pts; int list; scalar_t__ in_xds_mode; scalar_t__ subline; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (struct s_write *VAR_1)
{
    if( !VAR_1->enc_buffer )
    {
        VAR_1->enc_buffer=(unsigned char *) FUNC_1 (VAR_0);
        if (VAR_1->enc_buffer==((void*)0))
            return -1;
        VAR_1->enc_buffer_capacity=VAR_0;
    }

    if( !VAR_1->subline) {
        VAR_1->subline = FUNC_1(2048);

        if (!VAR_1->subline)
        {
            return -1;
        }
    }

    VAR_1->new_sentence = 1;
    VAR_1->new_channel = 1;
    VAR_1->in_xds_mode = 0;

    FUNC_0(&VAR_1->list);
    VAR_1->last_pts = 0;
    VAR_1->last_scr_sequence = 0;
    return 0;
}
