
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void (* lcdc_callback ) (void*) ;int tearsync_mode; void* lcdc_callback_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(int VAR_3, int VAR_4,
    void (VAR_5)(void * VAR_6), void *VAR_7)
{
 u32 VAR_8;

 FUNC_0(VAR_5 == ((void*)0));

 FUNC_3(1);
 FUNC_2(VAR_3, VAR_4);

 VAR_2.lcdc_callback = VAR_5;
 VAR_2.lcdc_callback_data = VAR_7;

 FUNC_5(VAR_1, VAR_3 * VAR_4);

 VAR_8 = FUNC_4(VAR_0);
 VAR_8 |= 1;
 if (!VAR_2.tearsync_mode)
  VAR_8 |= 1 << 4;
 FUNC_5(VAR_0, VAR_8);

 FUNC_1(1);
}
