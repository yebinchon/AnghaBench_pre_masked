
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_write {int list; scalar_t__ subline; scalar_t__ enc_buffer_used; scalar_t__ enc_buffer_capacity; scalar_t__ enc_buffer; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (struct s_write *VAR_0)
{
    if( VAR_0->enc_buffer ) {
        FUNC_0(VAR_0->enc_buffer);
        VAR_0->enc_buffer_capacity = 0;
        VAR_0->enc_buffer_used = 0;
    }
    if( VAR_0->subline ) {
        FUNC_0(VAR_0->subline);
    }
    FUNC_1(&VAR_0->list);
}
