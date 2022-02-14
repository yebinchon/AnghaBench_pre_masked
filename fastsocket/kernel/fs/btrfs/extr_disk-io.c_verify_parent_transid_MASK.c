
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_state {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct extent_buffer {scalar_t__ len; scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*) ;
 scalar_t__ FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_io_tree*,scalar_t__,scalar_t__,int ,struct extent_state**) ;
 int FUNC_4 (char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_5 (struct extent_io_tree*,scalar_t__,scalar_t__,struct extent_state**,int ) ;

__attribute__((used)) static int FUNC_6(struct extent_io_tree *VAR_2,
     struct extent_buffer *VAR_3, u64 VAR_4,
     int VAR_5)
{
 struct extent_state *VAR_6 = ((void*)0);
 int VAR_7;

 if (!VAR_4 || FUNC_0(VAR_3) == VAR_4)
  return 0;

 if (VAR_5)
  return -VAR_0;

 FUNC_3(VAR_2, VAR_3->start, VAR_3->start + VAR_3->len - 1,
    0, &VAR_6);
 if (FUNC_2(VAR_3) &&
     FUNC_0(VAR_3) == VAR_4) {
  VAR_7 = 0;
  goto out;
 }
 FUNC_4("parent transid verify failed on %llu wanted %llu "
         "found %llu\n",
         (unsigned long long)VAR_3->start,
         (unsigned long long)VAR_4,
         (unsigned long long)FUNC_0(VAR_3));
 VAR_7 = 1;
 FUNC_1(VAR_3);
out:
 FUNC_5(VAR_2, VAR_3->start, VAR_3->start + VAR_3->len - 1,
        &VAR_6, VAR_1);
 return VAR_7;
}
