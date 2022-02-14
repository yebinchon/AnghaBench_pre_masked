
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_ftdi {int dummy; } ;
struct urb {int dummy; } ;
struct u132_target {int halted; int skipped; int actual; int non_null; int toggle_bits; int error_count; int condition_code; int repeat_number; void (* callback ) (void*,struct urb*,int *,int,int,int,int,int,int,int,int,int) ;int active; void* endp; struct urb* urb; } ;


 void FUNC_0 (void*,struct urb*,int *,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct usb_ftdi *VAR_0,
        struct u132_target *VAR_1, u8 *VAR_2, int VAR_3)
{
        struct urb *VAR_4 = VAR_1->urb;
        int VAR_5 = VAR_1->halted;
        int VAR_6 = VAR_1->skipped;
        int VAR_7 = VAR_1->actual;
        int VAR_8 = VAR_1->non_null;
        int VAR_9 = VAR_1->toggle_bits;
        int VAR_10 = VAR_1->error_count;
        int VAR_11 = VAR_1->condition_code;
        int VAR_12 = VAR_1->repeat_number;
        void (*VAR_13) (void *, struct urb *, u8 *, int, int, int, int, int,
                int, int, int, int) = VAR_1->callback;
        VAR_1->active -= 1;
        VAR_1->callback = ((void*)0);
        (*VAR_13) (VAR_1->endp, VAR_4, VAR_2, VAR_3, VAR_9,
                VAR_10, VAR_11, VAR_12, VAR_5, VAR_6,
                VAR_7, VAR_8);
}
