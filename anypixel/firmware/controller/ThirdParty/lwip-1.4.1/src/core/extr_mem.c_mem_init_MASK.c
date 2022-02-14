
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct mem {size_t next; size_t prev; int used; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 struct mem* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 struct mem* VAR_9 ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(void)
{
  struct mem *VAR_10;

  FUNC_0("Sanity check alignment",
    (VAR_4 & (VAR_2-1)) == 0);


  VAR_8 = (u8_t *)FUNC_1(VAR_1);

  VAR_10 = (struct mem *)(void *)VAR_8;
  VAR_10->next = VAR_3;
  VAR_10->prev = 0;
  VAR_10->used = 0;

  VAR_9 = (struct mem *)(void *)&VAR_8[VAR_3];
  VAR_9->used = 1;
  VAR_9->next = VAR_3;
  VAR_9->prev = VAR_3;


  VAR_6 = (struct mem *)(void *)VAR_8;

  FUNC_2(VAR_5, VAR_3);

  if(FUNC_3(&VAR_7) != VAR_0) {
    FUNC_0("failed to create mem_mutex", 0);
  }
}
