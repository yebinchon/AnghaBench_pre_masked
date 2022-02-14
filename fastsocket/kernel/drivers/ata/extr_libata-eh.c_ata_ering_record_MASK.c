
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_ering_entry {unsigned int eflags; unsigned int err_mask; int timestamp; } ;
struct ata_ering {size_t cursor; struct ata_ering_entry* ring; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct ata_ering *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3)
{
 struct ata_ering_entry *VAR_4;

 FUNC_0(!VAR_3);

 VAR_1->cursor++;
 VAR_1->cursor %= VAR_0;

 VAR_4 = &VAR_1->ring[VAR_1->cursor];
 VAR_4->eflags = VAR_2;
 VAR_4->err_mask = VAR_3;
 VAR_4->timestamp = FUNC_1();
}
