
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsd_db {int checkpoint; scalar_t__ ratio; scalar_t__ in_count; scalar_t__ bytes_out; int n_bits; scalar_t__ max_ent; int clear_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct bsd_db *VAR_3)
{
    VAR_3->clear_count++;
    VAR_3->max_ent = VAR_2-1;
    VAR_3->n_bits = VAR_0;
    VAR_3->bytes_out = 0;
    VAR_3->in_count = 0;
    VAR_3->ratio = 0;
    VAR_3->checkpoint = VAR_1;
}
