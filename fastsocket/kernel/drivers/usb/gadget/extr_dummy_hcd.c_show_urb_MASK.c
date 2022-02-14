
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int actual_length; int pipe; TYPE_1__* dev; int transfer_buffer_length; } ;
typedef int ssize_t ;
struct TYPE_2__ {int speed; } ;
 int FUNC_0 (char*,size_t,char*,struct urb*,int ,int,char*,int ,int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline ssize_t
FUNC_4 (char *VAR_0, size_t VAR_1, struct urb *VAR_2)
{
 int VAR_3 = FUNC_1 (VAR_2->pipe);

 return FUNC_0 (VAR_0, VAR_1,
  "urb/%p %s ep%d%s%s len %d/%d\n",
  VAR_2,
  ({ char *VAR_4;
   switch (VAR_2->dev->speed) {
   case 128: VAR_4 = "ls"; break;
   case 130: VAR_4 = "fs"; break;
   case 129: VAR_4 = "hs"; break;
   default: VAR_4 = "?"; break;
   }; VAR_4; }),
  VAR_3, VAR_3 ? (FUNC_2 (VAR_2->pipe) ? "in" : "out") : "",
  ({ char *VAR_5; switch (FUNC_3 (VAR_2->pipe)) { case 132: VAR_5 = ""; break; case 133: VAR_5 = "-bulk"; break; case 131: VAR_5 = "-int"; break; default: VAR_5 = "-iso"; break; }; VAR_5;}),






  VAR_2->actual_length, VAR_2->transfer_buffer_length);
}
