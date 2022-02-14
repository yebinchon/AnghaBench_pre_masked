
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sbg_timestamp {scalar_t__ t; scalar_t__ type; } ;
struct sbg_string {scalar_t__ s; scalar_t__ e; } ;
struct sbg_fade {int slide; int member_2; int member_1; int member_0; } ;
struct sbg_script_tseq {struct sbg_fade fade; scalar_t__ name_len; scalar_t__ name; struct sbg_timestamp ts; } ;
struct TYPE_4__ {int nb_tseq; int tseq; int block_tseq; } ;
struct TYPE_3__ {scalar_t__ t; scalar_t__ type; } ;
struct sbg_parser {int nb_tseq_max; TYPE_2__ scs; int nb_block_tseq_max; int nb_block_tseq; TYPE_1__ current_time; int err_msg; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sbg_script_tseq* FUNC_1 (void**,int,int *,int *) ;
 scalar_t__ FUNC_2 (struct sbg_parser*,char*,int) ;
 int FUNC_3 (struct sbg_parser*) ;
 int FUNC_4 (struct sbg_parser*,struct sbg_string*) ;
 int FUNC_5 (struct sbg_parser*) ;
 int FUNC_6 (struct sbg_parser*,struct sbg_fade*) ;
 int FUNC_7 (struct sbg_parser*,struct sbg_timestamp*,scalar_t__*) ;
 int FUNC_8 (int ,int,char*) ;

__attribute__((used)) static int FUNC_9(struct sbg_parser *VAR_4, int VAR_5)
{
    struct sbg_timestamp VAR_6;
    int64_t VAR_7;
    int VAR_8;
    struct sbg_fade VAR_9 = { VAR_3, VAR_3, 0 };
    struct sbg_string VAR_10;
    struct sbg_script_tseq *VAR_11;

    VAR_8 = FUNC_7(VAR_4, &VAR_6, &VAR_7);
    if (!VAR_8)
        return 0;
    if (VAR_8 < 0)
        return VAR_8;
    if (VAR_6.type) {
        if (VAR_5)
            return VAR_0;
        VAR_4->current_time.type = VAR_6.type;
        VAR_4->current_time.t = VAR_6.t;
    } else if(!VAR_5 && !VAR_4->current_time.type) {
        FUNC_8(VAR_4->err_msg, sizeof(VAR_4->err_msg),
                 "relative time without previous absolute time");
        return VAR_0;
    }
    VAR_6.type = VAR_4->current_time.type;
    VAR_6.t = VAR_4->current_time.t + VAR_7;
    VAR_8 = FUNC_6(VAR_4, &VAR_9);
    if (VAR_8 < 0)
        return VAR_8;
    FUNC_5(VAR_4);
    if (!FUNC_4(VAR_4, &VAR_10))
        return VAR_0;
    FUNC_5(VAR_4);
    if (FUNC_2(VAR_4, "->", 2)) {
        VAR_9.slide = VAR_2;
        FUNC_5(VAR_4);
    }
    if (!FUNC_3(VAR_4))
        return VAR_0;
    VAR_11 = VAR_5 ?
           FUNC_1((void **)&VAR_4->scs.block_tseq, sizeof(*VAR_11),
                            &VAR_4->nb_block_tseq, &VAR_4->nb_block_tseq_max) :
           FUNC_1((void **)&VAR_4->scs.tseq, sizeof(*VAR_11),
                            &VAR_4->scs.nb_tseq, &VAR_4->nb_tseq_max);
    if (!VAR_11)
        return FUNC_0(VAR_1);
    VAR_11->ts = VAR_6;
    VAR_11->name = VAR_10.s;
    VAR_11->name_len = VAR_10.e - VAR_10.s;
    VAR_11->fade = VAR_9;
    return 1;
}
