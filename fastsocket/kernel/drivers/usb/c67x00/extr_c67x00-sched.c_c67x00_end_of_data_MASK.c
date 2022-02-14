
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer_length; int actual_length; int transfer_flags; int pipe; } ;
struct c67x00_td {int pipe; struct urb* urb; } ;


 int VAR_0 ;
 int FUNC_0 (struct c67x00_td*) ;
 int FUNC_1 (struct c67x00_td*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct c67x00_td *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 struct urb *VAR_5 = VAR_1->urb;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1);

 if (FUNC_2(!VAR_6))
  return 1;

 VAR_2 = FUNC_3(FUNC_1(VAR_1), VAR_1->pipe, FUNC_4(VAR_1->pipe));

 if (FUNC_2(VAR_6 < VAR_2))
  return 1;

 VAR_4 = VAR_5->transfer_buffer_length - VAR_5->actual_length;
 VAR_3 = (VAR_5->transfer_flags & VAR_0) &&
     FUNC_4(VAR_5->pipe) && !(VAR_4 % VAR_2);

 if (FUNC_2(!VAR_4 && !VAR_3))
  return 1;

 return 0;
}
