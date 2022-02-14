
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct urb {unsigned char* transfer_buffer; int actual_length; struct cx231xx_dmaqueue* context; } ;
struct cx231xx_dmaqueue {unsigned char* ps_head; } ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,struct urb*,struct cx231xx_dmaqueue*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static inline int FUNC_4(struct cx231xx *VAR_1, struct urb *VAR_2)
{



 struct cx231xx_dmaqueue *VAR_3 = VAR_2->context;
 unsigned char *VAR_4, *VAR_5;
 u32 VAR_6 = 0;

 VAR_4 = VAR_2->transfer_buffer;
 VAR_6 = VAR_2->actual_length;

 VAR_5 = FUNC_2(VAR_6, VAR_0);

 FUNC_3(VAR_5, VAR_3->ps_head, 3);
 FUNC_3(VAR_5+3, VAR_4, VAR_6-3);
 FUNC_3(VAR_3->ps_head, VAR_4+VAR_6-3, 3);

 VAR_4 = VAR_5;
 FUNC_0(VAR_4, VAR_6, VAR_2, VAR_3);

 FUNC_1(VAR_5);
 return 0;
}
