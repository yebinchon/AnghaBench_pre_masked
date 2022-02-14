
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct input_dev {int dummy; } ;
struct ad7879 {unsigned int* conversion_data; unsigned int x_plate_ohms; struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct input_dev*,int ,unsigned int) ;
 int FUNC_1 (struct input_dev*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ad7879 *VAR_8)
{
 struct input_dev *VAR_9 = VAR_8->input;
 unsigned VAR_10;
 u16 VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_11 = VAR_8->conversion_data[VAR_3] & VAR_7;
 VAR_12 = VAR_8->conversion_data[VAR_4] & VAR_7;
 VAR_13 = VAR_8->conversion_data[VAR_5] & VAR_7;
 VAR_14 = VAR_8->conversion_data[VAR_6] & VAR_7;
 if (FUNC_2(VAR_11 && VAR_13)) {

  VAR_10 = (VAR_14 - VAR_13) * VAR_11 * VAR_8->x_plate_ohms;
  VAR_10 /= VAR_13;
  VAR_10 = (VAR_10 + 2047) >> 12;

  FUNC_0(VAR_9, VAR_1, VAR_11);
  FUNC_0(VAR_9, VAR_2, VAR_12);
  FUNC_0(VAR_9, VAR_0, VAR_10);
  FUNC_1(VAR_9);
 }
}
