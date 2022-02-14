
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int input_length; scalar_t__* buffer; int buffer_length; } ;
typedef TYPE_1__ InputBuffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__**,int *,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;

void FUNC_3(InputBuffer* VAR_2) {
  ssize_t VAR_3 =
      FUNC_1(&(VAR_2->buffer), &(VAR_2->buffer_length), VAR_1);

  if (VAR_3 <= 0) {
    FUNC_2("Error reading input\n");
    FUNC_0(VAR_0);
  }


  VAR_2->input_length = VAR_3 - 1;
  VAR_2->buffer[VAR_3 - 1] = 0;
}
