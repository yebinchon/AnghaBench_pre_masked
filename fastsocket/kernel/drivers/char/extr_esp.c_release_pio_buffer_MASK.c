
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp_pio_buffer {struct esp_pio_buffer* next; } ;


 struct esp_pio_buffer* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct esp_pio_buffer *VAR_2)
{
 unsigned long VAR_3;
 FUNC_0(&VAR_1, VAR_3);
 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;
 FUNC_1(&VAR_1, VAR_3);
}
