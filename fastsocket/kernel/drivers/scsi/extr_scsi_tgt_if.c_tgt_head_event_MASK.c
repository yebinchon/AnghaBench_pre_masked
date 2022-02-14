
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tgt_ring {scalar_t__* tr_pages; } ;
struct tgt_event {int dummy; } ;


 size_t VAR_0 ;

__attribute__((used)) static struct tgt_event *FUNC_0(struct tgt_ring *VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_3 = VAR_2 / VAR_0;
 VAR_4 = VAR_2 % VAR_0;

 return (struct tgt_event *)
  (VAR_1->tr_pages[VAR_3] + sizeof(struct tgt_event) * VAR_4);
}
