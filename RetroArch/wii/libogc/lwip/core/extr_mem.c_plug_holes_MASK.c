
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct mem {scalar_t__ used; size_t next; int prev; } ;


 int FUNC_0 (char*,int) ;
 size_t VAR_0 ;
 struct mem* VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct mem *VAR_4)
{
  struct mem *VAR_5;
  struct mem *VAR_6;

  FUNC_0("plug_holes: mem >= ram", (u8_t *)VAR_4 >= VAR_2);
  FUNC_0("plug_holes: mem < ram_end", (u8_t *)VAR_4 < (u8_t *)VAR_3);
  FUNC_0("plug_holes: mem->used == 0", VAR_4->used == 0);


  FUNC_0("plug_holes: mem->next <= MEM_SIZE", VAR_4->next <= VAR_0);

  VAR_5 = (struct mem *)&VAR_2[VAR_4->next];
  if (VAR_4 != VAR_5 && VAR_5->used == 0 && (u8_t *)VAR_5 != (u8_t *)VAR_3) {
    if (VAR_1 == VAR_5) {
      VAR_1 = VAR_4;
    }
    VAR_4->next = VAR_5->next;
    ((struct mem *)&VAR_2[VAR_5->next])->prev = (u8_t *)VAR_4 - VAR_2;
  }


  VAR_6 = (struct mem *)&VAR_2[VAR_4->prev];
  if (VAR_6 != VAR_4 && VAR_6->used == 0) {
    if (VAR_1 == VAR_4) {
      VAR_1 = VAR_6;
    }
    VAR_6->next = VAR_4->next;
    ((struct mem *)&VAR_2[VAR_4->next])->prev = (u8_t *)VAR_6 - VAR_2;
  }

}
