
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_plane_info {int enabled; unsigned int size; int pos_x; int pos_y; int out_width; int out_height; } ;
struct omapfb_mem_info {int enabled; unsigned int size; int pos_x; int pos_y; int out_width; int out_height; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int,int ,struct omapfb_plane_info*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 struct omapfb_plane_info VAR_12;
 struct omapfb_mem_info VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 VAR_16 = FUNC_1(VAR_6, VAR_2, &VAR_12);
 if (VAR_16 != 0) {
  FUNC_2("QUERY_PLANE");
  return -1;
 }

 VAR_16 = FUNC_1(VAR_6, VAR_1, &VAR_13);
 if (VAR_16 != 0) {
  FUNC_2("QUERY_MEM");
  return -1;
 }


 VAR_14 = VAR_12.enabled;
 if (VAR_14) {
  VAR_12.enabled = 0;
  VAR_16 = FUNC_1(VAR_6, VAR_4, &VAR_12);
  if (VAR_16 != 0)
   FUNC_2("SETUP_PLANE");
  else
   VAR_14 = 0;
 }

 if (VAR_13.size < VAR_0) {
  unsigned int VAR_17 = VAR_13.size;

  VAR_13.size = VAR_0;
  VAR_16 = FUNC_1(VAR_6, VAR_3, &VAR_13);
  if (VAR_16 != 0) {
   FUNC_2("SETUP_MEM");
   FUNC_0(VAR_5, "(requested %u, had %u)\n",
    VAR_13.size, VAR_17);
   return -1;
  }
 }

 VAR_12.pos_x = VAR_8;
 VAR_12.pos_y = VAR_9;
 VAR_12.out_width = VAR_10;
 VAR_12.out_height = VAR_11;
 VAR_12.enabled = VAR_7;

 VAR_16 = FUNC_1(VAR_6, VAR_4, &VAR_12);
 if (VAR_16 == 0) {
  VAR_14 = VAR_12.enabled;
 }
 else {
  FUNC_2("SETUP_PLANE");
  VAR_15 = -1;
 }

 FUNC_3(1, VAR_14);

 return VAR_15;
}
