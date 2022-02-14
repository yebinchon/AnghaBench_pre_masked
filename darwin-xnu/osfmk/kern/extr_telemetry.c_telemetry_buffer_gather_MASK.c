
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef scalar_t__ uint32_t ;
struct micro_snapshot_buffer {scalar_t__ buffer; scalar_t__ size; scalar_t__ current_position; scalar_t__ end_point; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__,scalar_t__,scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (void*,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 struct micro_snapshot_buffer VAR_6 ;
 scalar_t__ VAR_7 ;

int FUNC_7(user_addr_t VAR_8, uint32_t *VAR_9, boolean_t VAR_10, struct micro_snapshot_buffer * VAR_11)
{
 int VAR_12 = 0;
 uint32_t VAR_13;

 FUNC_0(FUNC_1(VAR_2, VAR_4) | VAR_1,
   VAR_10, VAR_7, 0,
   (&VAR_6 != VAR_11));

 FUNC_2();

 if (VAR_11->buffer == 0) {
  *VAR_9 = 0;
  goto out;
 }

 if (*VAR_9 < VAR_11->size) {
  VAR_12 = VAR_3;
  goto out;
 }





 VAR_13 = VAR_11->current_position;
 do {
  if (((VAR_13 + sizeof(uint32_t)) > VAR_11->size) ||
      ((VAR_13 + sizeof(uint32_t)) > VAR_11->end_point)) {

   if (*(uint32_t *)(uintptr_t)(VAR_11->buffer) == 0) {




    *VAR_9 = 0;
    goto out;
   }






   VAR_13 = 0;
   FUNC_4(*(uint32_t *)(uintptr_t)(VAR_11->buffer) == VAR_5);
   break;
  }

  if (*(uint32_t *)(uintptr_t)(VAR_11->buffer + VAR_13) == VAR_5)
   break;





  VAR_13++;
 } while (VAR_13 != VAR_11->current_position);





 if (VAR_13 != 0) {




  if ((VAR_12 = FUNC_5((void *)(VAR_11->buffer + VAR_13), VAR_8,
      VAR_11->end_point - VAR_13)) != 0) {
   *VAR_9 = 0;
   goto out;
  }
  *VAR_9 = VAR_11->end_point - VAR_13;
 } else {
  *VAR_9 = 0;
 }




 if ((VAR_12 = FUNC_5((void *)VAR_11->buffer, VAR_8 + *VAR_9,
     VAR_11->current_position)) != 0) {
  *VAR_9 = 0;
  goto out;
 }
 *VAR_9 += (uint32_t)VAR_11->current_position;

out:

 if (VAR_10 && (*VAR_9 > 0)) {
  VAR_7 = 0;
 }

 FUNC_3();

 FUNC_0(FUNC_1(VAR_2, VAR_4) | VAR_0,
   VAR_11->current_position, *VAR_9,
   VAR_11->end_point, (&VAR_6 != VAR_11));

 return (VAR_12);
}
