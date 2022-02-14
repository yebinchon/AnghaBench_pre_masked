
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_ps_page {scalar_t__ page; } ;
struct e1000_buffer {struct e1000_ps_page* ps_pages; } ;
struct e1000_adapter {int rx_ps_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*,int ,int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_3,
     struct e1000_buffer *VAR_4)
{
 int VAR_5;
 struct e1000_ps_page *VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->rx_ps_pages; VAR_5++) {
  VAR_6 = &VAR_4->ps_pages[VAR_5];

  if (VAR_6->page) {
   FUNC_1("packet dump for ps_page %d:\n", VAR_5);
   FUNC_2(VAR_1, "", VAR_0,
           16, 1, FUNC_0(VAR_6->page),
           VAR_2, 1);
  }
 }
}
