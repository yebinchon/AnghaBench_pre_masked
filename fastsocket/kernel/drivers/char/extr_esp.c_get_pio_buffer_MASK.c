
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp_pio_buffer {struct esp_pio_buffer* next; } ;


 int VAR_0 ;
 struct esp_pio_buffer* VAR_1 ;
 struct esp_pio_buffer* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline struct esp_pio_buffer *FUNC_3(void)
{
 struct esp_pio_buffer *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2, VAR_4);
 if (VAR_1) {
  VAR_3 = VAR_1;
  VAR_1 = VAR_3->next;
 } else {
  VAR_3 = FUNC_0(sizeof(struct esp_pio_buffer), VAR_0);
 }
 FUNC_2(&VAR_2, VAR_4);
 return VAR_3;
}
