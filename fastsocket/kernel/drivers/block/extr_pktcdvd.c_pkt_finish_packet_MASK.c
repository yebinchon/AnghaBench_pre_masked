
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_data {int * orig_bios_tail; struct bio* orig_bios; scalar_t__ cache_valid; } ;
struct bio {struct bio* bi_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,int ) ;

__attribute__((used)) static void FUNC_1(struct packet_data *VAR_1, int VAR_2)
{
 struct bio *VAR_3, *VAR_4;

 if (!VAR_2)
  VAR_1->cache_valid = 0;


 VAR_3 = VAR_1->orig_bios;
 while (VAR_3) {
  VAR_4 = VAR_3->bi_next;
  VAR_3->bi_next = ((void*)0);
  FUNC_0(VAR_3, VAR_2 ? 0 : -VAR_0);
  VAR_3 = VAR_4;
 }
 VAR_1->orig_bios = VAR_1->orig_bios_tail = ((void*)0);
}
