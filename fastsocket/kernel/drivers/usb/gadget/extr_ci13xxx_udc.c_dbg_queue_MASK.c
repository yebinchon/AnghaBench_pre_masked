
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_request {int length; int no_interrupt; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char*) ;
 int FUNC_1 (char*,int,char*,int,int ) ;

__attribute__((used)) static void FUNC_2(u8 VAR_1, const struct usb_request *VAR_2, int VAR_3)
{
 char VAR_4[VAR_0];

 if (VAR_2 != ((void*)0)) {
  FUNC_1(VAR_4, sizeof(VAR_4),
     "%d %d", !VAR_2->no_interrupt, VAR_2->length);
  FUNC_0(VAR_1, "QUEUE", VAR_3, VAR_4);
 }
}
