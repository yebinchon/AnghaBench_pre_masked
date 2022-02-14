
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pipe_garbage {int pg_timestamp; struct pipe_garbage* pg_next; struct pipe_garbage* pg_pipe; int pipe_state; } ;
struct pipe {int pg_timestamp; struct pipe* pg_next; struct pipe* pg_pipe; int pipe_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 struct pipe_garbage* VAR_4 ;
 int VAR_5 ;
 struct pipe_garbage* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*,struct pipe_garbage*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,struct pipe_garbage*) ;

__attribute__((used)) static void
FUNC_8(struct pipe *VAR_9)
{
 uint64_t VAR_10, VAR_11;
 struct pipe_garbage *VAR_12;


 VAR_10 = VAR_2 * 1000000;
 FUNC_3(VAR_10, &VAR_10);

 FUNC_0(VAR_5);


 VAR_11 = FUNC_2();
 VAR_10 = VAR_11 - VAR_10;
 while ((VAR_12 = VAR_4) && VAR_12->pg_timestamp < VAR_10) {
  VAR_4 = VAR_12->pg_next;
  if (VAR_4 == ((void*)0))
   VAR_6 = ((void*)0);
  VAR_3--;
  FUNC_7(VAR_8, VAR_12->pg_pipe);
  FUNC_7(VAR_7, VAR_12);
 }


 if (VAR_9) {
  VAR_9->pipe_state = VAR_0;
  VAR_12 = (struct pipe_garbage *)FUNC_6(VAR_7);
  if (VAR_12 == ((void*)0)) {
   FUNC_5("Leaking pipe %p - no room left in the queue",
       VAR_9);
   FUNC_1(VAR_5);
   return;
  }

  VAR_12->pg_pipe = VAR_9;
  VAR_12->pg_timestamp = VAR_11;
  VAR_12->pg_next = ((void*)0);

  if (VAR_6)
   VAR_6->pg_next = VAR_12;
  VAR_6 = VAR_12;
  if (VAR_4 == ((void*)0))
   VAR_4 = VAR_6;

  if (VAR_3++ >= VAR_1)
   FUNC_4("Length of pipe garbage queue exceeded %d",
       VAR_1);
 }
 FUNC_1(VAR_5);
}
